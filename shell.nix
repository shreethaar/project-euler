{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
  name = "golang-python-dev-shell";

  buildInputs = [
    # Go tools
    pkgs.go               # Go compiler and tools
    pkgs.gopls            # Go language server
    pkgs.golangci-lint    # Go linter

    # Python tools
    pkgs.python311        # Python 3.11 interpreter
    pkgs.pip              # Python package installer
    pkgs.virtualenv       # Virtual environment for Python
    pkgs.black            # Python code formatter
    pkgs.flake8           # Python linter
    pkgs.mypy             # Python type checker
  ];

  shellHook = ''
    # Go environment
    export GOROOT=${pkgs.go}/lib/go
    export GOPATH=$HOME/go
    export PATH=$GOROOT/bin:$GOPATH/bin:$PATH

    # Python virtual environment setup
    if [ ! -d .venv ]; then
      virtualenv .venv
    fi
    source .venv/bin/activate

    echo "Go and Python development shell initialized!"
    echo "GOROOT: $GOROOT"
    echo "GOPATH: $GOPATH"
    echo "Python virtual environment activated."
  '';
}


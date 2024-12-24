{ pkgs ? import <nixpkgs> {} }:
pkgs.mkShell {
  name = "golang-python-dev-shell";
  buildInputs = [
    # Go tools
    pkgs.go
    pkgs.gopls
    pkgs.golangci-lint
    # Python tools with packages
    (pkgs.python312.withPackages (pythonPackages: [
      pythonPackages.pip
      pythonPackages.black
      pythonPackages.flake8
      pythonPackages.mypy
    ]))
  ];
  shellHook = ''
    # Go environment
    export GOROOT=${pkgs.go}/lib/go
    export GOPATH=$HOME/go
    export PATH=$GOROOT/bin:$GOPATH/bin:$PATH
    # Activate Python environment
    echo "Go and Python development shell initialized!"
    echo "GOROOT: $GOROOT"
    echo "GOPATH: $GOPATH"
  '';
}

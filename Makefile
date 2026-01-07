SHELL := /bin/bash
.PHONY: all opensbi busybox linux

all: opensbi busybox linux

opensbi:
	pushd riscv-opensbi-port && ./compile.sh && popd

busybox:
	pushd riscv-busybox-port && ./compile.sh && popd

linux:
	pushd riscv-linux-port && ./compile.sh && popd

linux-ue:
	pushd riscv-linux-ue && ./compile.sh && popd

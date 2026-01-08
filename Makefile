SHELL := /bin/bash
.PHONY: all opensbi busybox linux lineux-ue linux-420

all: opensbi busybox linux

opensbi:
	pushd riscv-opensbi-port && ./compile.sh && popd

busybox:
	pushd riscv-busybox-port && ./compile.sh && popd

linux:
	pushd riscv-linux-port && ./compile.sh && popd

linux-ue:
	pushd riscv-linux-ue && ./compile.sh && popd

linux-420:
	pushd riscv-linux-4.20 && ./compile.sh && popd

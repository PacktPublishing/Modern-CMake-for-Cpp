FROM ubuntu:latest

RUN apt-get update && apt-get install --no-install-recommends -y \
ca-certificates vim tree wget git lcov gawk \
g++ make \
pkg-config clang-tidy clang-format valgrind doxygen graphviz cppcheck \
protobuf-compiler libprotobuf-dev libpqxx-dev\
&& rm -rf /var/lib/apt/lists/*

# install cmake
ENV version=3.20.0

RUN cd /tmp && \
mkdir /opt/cmake && \
wget https://github.com/Kitware/CMake/releases/download/v$version/cmake-$version-Linux-x86_64.sh && \
chmod a+x ./cmake-$version-Linux-x86_64.sh && \
./cmake-$version-Linux-x86_64.sh --prefix=/opt/cmake --skip-license && \
rm cmake-$version-Linux-x86_64.sh

RUN ln -s /opt/cmake/bin/* /usr/local/bin/

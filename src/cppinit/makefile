# 根目录名
PROJECT_NAME = cppinit

# 源文件目录
SRC_DIR = src

# 编译输出目录
BUILD_DIR = build

# 编译器
CXX = g++

# 编译选项
CXXFLAGS = -std=c++11 -Wall -Wextra -O2

# 链接选项
LDFLAGS =

# 源文件和目标文件
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

# 默认目标
all: $(BUILD_DIR)/$(PROJECT_NAME).exe

# 链接目标文件生成可执行文件
$(BUILD_DIR)/$(PROJECT_NAME).exe: $(OBJS)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^

# 编译源文件生成目标文件
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理构建目标文件
clean:
	rm -f $(OBJS)

***npc/vsrc文件夹中包含了硬件设计的rtl代码***<br>
***nemu文件夹中包含了模拟器的设计代码***<br>
这是"一生一芯"的工程项目,若要运行工程首先要初始化环境
```bash
bash init.sh abstract-machine
bash init.sh am-kernels
bash init.sh nanos-lite
bash init.sh navy-apps
bash init.sh nvboard
```
在环境变量中设置好npc和nemu文件夹的位置：
export NEMU_HOME=${YSYX_HOME}/nemu
export NPC_HOME=${YSYX_HOME}/npc
其中${YSYX_HOME}就是当前工程文件夹的位置

首先在npc文件夹中和nemu文件夹中运行
make clean
再在nemu文件夹中运行
make run
最后在npc文件夹中运行
make run
自此已经完成了工程编译
```
若要运行测试程序，可以在am-kernels/tests/cpu-tests文件夹下运行：
make ARCH=riscv64-npc run 
若要运行coremark基准测试程序，可以在/am-kernels/benchmarks/coremark文件夹下运行：
make ARCH=riscv64-npc run

qs：进入nemu运行程序的时候可以通过q指令退出nemu





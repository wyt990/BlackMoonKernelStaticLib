#include "stdafx.h"
/*
    调用格式： 〈整数型〉 取硬盘特征字 （） - 系统核心支持库->其他
    英文名称：GetHDiskCode
    返回电脑中第一个物理硬盘的物理特征字，该特征字是仅硬件相关的，也就是说与任何软件系统都无关（包括操作系统）。用户可以使用此特征字来限制自己的程序仅在某一台计算机上运行，以保护自己软件的版权。本命令可以在任何 Windows 系统版本下运行。命令执行后如果返回 0 ，表示此次取硬盘特征字失败。由于有可能是因为暂时的 I/O 冲突造成，因此失败后可以等待一段随机时间后再试（可以参看例程）。如果重复尝试四五次后仍然失败，表明该硬盘无法取出特征字。本命令为初级命令。
*/
extern DWORD __cdecl GetHDiskCode(int *a1);

LIBAPI(DWORD, krnln_GetHDiskCode)
{
  return GetHDiskCode((int *)"_S414");
}
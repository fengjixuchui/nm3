/*
此文是供IDA使用的。

用法：文件->加载文件->解析c头文件。
*/


typedef enum _FILTER_STATE
/*
摘自：\Windows-driver-samples\network\ndis\filter\filter.h

有可能定义的不对，有待检查。
*/
{
    FilterStateUnspecified,
    FilterInitialized,
    FilterPausing,
    FilterPaused,
    FilterRunning,
    FilterRestarting,
    FilterDetaching
} FILTER_STATE;


/*
还有FsContext2 的18175还有待定义个宏。
*/




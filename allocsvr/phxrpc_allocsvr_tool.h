/* phxrpc_allocsvr_tool.h

 Generated by phxrpc_pb2tool from allocsvr.proto

 Please DO NOT edit unless you know exactly what you are doing.

*/

#include <stdio.h>
#pragma once


namespace phxrpc {
    class OptMap;
}

class AllocsvrTool
{
public:
    AllocsvrTool();
    virtual ~AllocsvrTool();

    virtual int PHXEcho( phxrpc::OptMap & bigmap );

    virtual int GetSeq( phxrpc::OptMap & bigmap );

public:
    typedef int (AllocsvrTool::*ToolFunc_t) ( phxrpc::OptMap & );

    typedef struct tagName2Func {
        const char * name;
        AllocsvrTool::ToolFunc_t func;
        const char * opt_string;
        const char * usage;
    } Name2Func_t;

    static Name2Func_t * GetName2Func()
    {
        static Name2Func_t name2func [] = {
            { "PHXEcho", &AllocsvrTool::PHXEcho, "c:f:vs:",
                    "-s <string>" },
            { "GetSeq", &AllocsvrTool::GetSeq, "c:f:vu:r:",
                    "-u <user> -r <has_router>" },
            { NULL, NULL }
        };

        return name2func;
    };
};

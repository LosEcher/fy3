#include <room.h>
#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "�һ�ɽׯ����");
        set("long",@LONG
�������һ�ɽׯ�����š���ǰ�������µ����˼����һ���������
�ô˵����˶��һ���ƫ�����ſ�վ������Сͯ���ش��š��������ڵ�
����Զ�����̺��������Ƕ�ɽׯ�ķ��������ر��������ǰ��һ�԰�
��.
LONG);
        set("outdoors", "taohua");
        set("exits", ([
                "south" : __DIR__"qianyuan",
                "north" : __DIR__"tingzi",
                "east"  : __DIR__"road1" ,       
        ]));
        
        set("objects", ([
                __DIR__"npc/shitong" : 2,
                __DIR__"npc/lu" : 1,
        ]));
        set( "GATE_ROOM",1 );
        set( "gate_dir",(["north" : __DIR__"tingzi"]) );
        set( "close_look",@LONG
��ɫ����ɽׯ�����Ѿ������ˣ�������������ģ���
LONG
);

        set( "gate_name","�һ�ɽׯ����" );

        set("outdoors", "taohua");
        setup();
}


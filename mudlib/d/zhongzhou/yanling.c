//yanling
inherit ROOM;
void create()
{
  set ("short", "������·");
  set ("long", @LONG
�������������߾͵���������·���������ݵ�һ���Ͻ֡����ߵķ���
����ȥ�Ѿ��ܳ¾��ˡ��ֵ��������һ�䷿�ӿ���ȥ��һ�����̡�
LONG);

set("outdoors","/d/zhongzhou");

  set("exits", ([  
    "west" : __DIR__"yanling1",
    "south" : __DIR__"dangpu",
    "east"  : __DIR__"shizhongxin",
]));
       
	set("objects", ([
	__DIR__"npc/liumang" : 2,
	]));
	 setup();
        replace_program(ROOM);
}

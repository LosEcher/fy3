//yanlingdong1

inherit ROOM;

void create()
{
  set ("short", "���궫·");
  set ("long", @LONG
�������ݵ�һ����·����·��������������ݳǡ�·��һƬ���ӿ�
����Ȼ���Ǻ��£���һ����֪����һ�����˼ҡ������Ҷ����������ſڣ�
�·�ɵ��⻧�˼����Ҷ��Ǻ��˲�����¡�
LONG);

set("outdoors","/d/zhongzhou");

  set("exits", ([
    "west" : __DIR__"yanlingdong",
    "north" : __DIR__"yuanwan",
    "southeast"  : __DIR__"yanlingdong2",
]));

	set("objects" , ([
		__DIR__"npc/wolfdog" : 1,
		__DIR__"npc/jiading":2,
	]));
         setup();
        replace_program(ROOM);
}

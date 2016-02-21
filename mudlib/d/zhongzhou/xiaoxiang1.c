// Room: /d/zhongzhou/xiaoxiang1.c

inherit ROOM;

void create()
{
	set("short", "С��");
	set("long", @LONG
ǰ�濴��������Ҫ��С����ˣ���������Խ��ϡ�١��������Ϻ���
��һ�����÷��ӣ�ԶԶ��ȥ�����������¾ɲ�����ԭ����������
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/gaibang/jiang-sy.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"guandimiao",
  "east" : __DIR__"xiaoxiang",
]));
	set("outdoors", "/d/zhongzhou");

	setup();
	replace_program(ROOM);
}

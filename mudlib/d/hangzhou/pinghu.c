// Room: /d/hangzhou/pinghu.c

inherit ROOM;

void create()
{
	set("short", "ƽ������");
	set("long", @LONG
"���꺮��һϦ�̣�ˮ���д�Ƭ���ޣ��շ�ң�������䣬���ӷ׷׵� 
���",��ǰˮ�����,ˮƽ�羵,�����ˬ֮ʱ,����ƽ���羵������� 
�µ��գ��¹����ˮ�����ӳ�����С�һɫ���������֮��.·������ 
Сͤ��,��Ϊ'����ͤ'. 
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/man.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"wanghu.c",
  "east" : __DIR__"baidi3.c",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");

	setup();
	replace_program(ROOM);
}

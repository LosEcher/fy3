// Room: /d/quanzhou/yixiaot.c

inherit ROOM;

void create()
{
	set("short", "һХ̨");
	set("long", @LONG
��ɽ������,�����һ��ƽ̨,ɽ�����˽�תƽ��,��ǰȺɽ����,�� 
�Ա߶��͵�ʯ����,���񹤰�Ŀ��˸�ʯ��,�ڱ���,��һ���������� 
���շ𸡵���. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 2 */
  "northdown" : __DIR__"laojun-stone",
  "southdown" : __DIR__"bixiao-stone",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yunyouseng.c" : 1,
]));

	setup();
	replace_program(ROOM);
}

// Room: /d/huanggon/yuhuayuan2.c

inherit ROOM;

void create()
{
	set("short", "����԰");
	set("long", @LONG
����԰��,��ʯ�߶�Ϊ��,��ˮ����ΪϪ,�ϼ�С������,ֻҪһ����
����,�������úϱ��Ĺ���,����֦Ҷ��֯,�໥����,�γ�һ����Ȼ����,
һ��С���ʹ������´���,С·��Զ�Ǹ�����¯,�ٱ������հ���.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yuqianshiwei.c" : 1,
]));
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"qingandian",
  "south" : __DIR__"kunningon",
  "east" : __DIR__"cininggon",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}

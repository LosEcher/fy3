// Room: /d/huanggon/shiweifang.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
����������ǰ�������ܲ�,Ҳ�����ǽ��Ӱ�ĵط�,���ε��ܹ��Ƕ�
¡,��˵�书ʮ�ָ���.���濿ǽ����ʮ��������,�����з���Щ����.
����������,�����Ǳ��͵�.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/zhangkangnian.c" : 1,
  __DIR__"npc/zhaoqixian.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"baohedian",
  "east" : __DIR__"shiweifang1",
]));

	setup();
	replace_program(ROOM);
}

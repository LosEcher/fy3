// Room: /d/quanzhou/dangpu.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����Ĵ����ָ���������,һ�߸߸ߵĹ�̨,���滹װ����դ��,����
���������ͷ�������ͭǮ,д�ŵ�Ʊ.�����ǿ���������˻�͵͵������
��Ʀ,����Ǵ����̵���Щʲô.�����Ȫ�ݳǵĵ���.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"wstreet2",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/sunchaofeng.c" : 1,
]));

	setup();
	replace_program(ROOM);
}

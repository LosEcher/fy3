// Room: /d/kaifeng/ciqi.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�������Ǽ���۹ٴɵ��̵꣬���Ҳ����Щ�黭��Ʒ��������һ�£�
����������ľ�����ϴ�С����Ĵ���������Ǹ����˼��õġ���ִɣ���
��֮�ණ����ֻ�ܴӵ�̯���ˡ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/liuzhanggui.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"road3",
]));

	setup();
	replace_program(ROOM);
}

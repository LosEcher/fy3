// Room: /d/huanggon/neitang.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
������լ���������������ھ��ǵ���Ŵ�.�㿴�������Ǹ�����.��
�֮���ǿڹײ�,�������ڹײ�֮��,¶�����ͷ,һ˫��,�ײ�ǰ����¯
�ڷٻ������ֽǮ.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/baihanfeng.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"muwangfu",
]));

	setup();
	replace_program(ROOM);
}

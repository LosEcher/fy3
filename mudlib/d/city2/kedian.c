// Room: /d/city2/kedian.c

inherit ROOM;

void create()
{
	set("short", "������ջ");
	set("long", @LONG
����һ�Ҽ�Ǯ�����Ŀ�ջ������ǳ���¡����˵ȫ������
���������ķֵ꣬�������еĿ�ջ����һ�������С���������
����¶�棬˭Ҳ��֪��������������һ���ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"majiu",
  "west" : __DIR__"nandaj1",
]));
	set("objects", ([ /* sizeof() == 1 */
__DIR__"npc/sufoer.c":1,
]));
	set("valid_startroom", 1);

	setup();
	replace_program(ROOM);
}

// Room: /d/chengdu/cdta.c

inherit ROOM;

void create()
{
	set("short", "�ٻ�̶");
	set("long", @LONG
̶��ƽ������һ�����λεľ��ӣ���ӳ�ź���������̶��ļ�
Ƭ��Ҷ���ָ�̶ˮ�����˼�����ɫ����������佻�Ϫ��
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/youke" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"cdcc",
  "west" : __DIR__"caotang",
]));
	set("outdoors", "chengdu");

	setup();
	replace_program(ROOM);
}

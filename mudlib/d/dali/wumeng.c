// Room: /d/dali/wumeng.c

inherit ROOM;

void create()
{
	set("short", "���ɴ���");
	set("long", @LONG
������ɽ�Ļ��£������˰�ʯȥ�����������޳�һ������״��
ƽ̨����ӷֱ��ڸ���ƽ̨�ϣ��������ӣ�������ʯ��Χǽ������
��·Ҳ��ʯͷ�̳ɡ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/muyangren.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"wuyiminju2",
  "north" : __DIR__"wuyiminju1",
  "east" : __DIR__"caopo",
  "west" : __DIR__"wunong",
]));
	set("outdoors", "dali");

	setup();
	replace_program(ROOM);
}

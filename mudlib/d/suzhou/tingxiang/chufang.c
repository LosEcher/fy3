// Room: /u/oldsix/room1/chufang.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
ֻ����ʦ�Ϲ�æ����ͷ�󺹣�����ͣ�ڵ�����������ĭ������˫�����꣬��
���಻ס�굽���С��㿴���ⲻ���ֺ������ֺ�Ц���Ϲ�ͷ�����������һ����
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"huatan",
]));
	set("objects",([
		__DIR__"npc/gu" :1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}

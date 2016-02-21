// Room: /d/kaifeng/chufang2.c

inherit ROOM;

void create()
{
	set("short", "��ի��");
	set("long", @LONG
��ի���ļ��������յ���������ɫ���������Ҷ�����һ�㣬���ż��
�����ɲ񣬺����Ǻ����ޣ�˵�������ֲ������ķ��˲Ž���һ�ߵ�
���ϰ���һ����Ͱ�����滹�а�Ͱϡ���������и�С�ų�ȥ��
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/suzhai.c" : 1,
  __DIR__"npc/shaohuo.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"chufang",
  "east" : __DIR__"zoulang",
]));

	setup();
	replace_program(ROOM);
}

// Room: /d/kaifeng/tangjian.c

inherit ROOM;

void create()
{
	set("short", "�ü�");
	set("long", @LONG
һ���ķ����ü䣬���еĹ����󻹰������ȱ�ķ�������ȱ�˰��
�Դ������ϰ���֩������ס�ˣ�Ҳ������ԭ����ģ����һ�ߵ�������
���˸����̣���ǽ���ż���ˮ�ޡ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/oldseng.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"kongdi",
]));

	setup();
	replace_program(ROOM);
}

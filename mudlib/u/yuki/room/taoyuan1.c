// Room: /u/yuki/room/taoyuan1.c

inherit ROOM;

void create()
{
	set("short", "С��");
	set("long", @LONG
�����������Ů�����ҡ�ֻ�����صĺܶࡣ�ұߵ�ǽ�Ϲ���
һ�ѱ��������˸о�����������ɱ������Ȼ�����Ů�Ǹ�����֮
�ˡ��������������ϴ�÷ׯׯ�������ơ�ʹ�˲���˼�顣����
�����ҡ�����һ�Ŵ���һ�Ž�С����ױ̨��ʲôҲû���ˡ���ȴ
��ʧ���С��ķ緶������һ�����£��ɾ��ĸо���
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"taoyuan",
]));

	setup();
	replace_program(ROOM);
}

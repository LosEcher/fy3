// Room: /d/huashan/jushi.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����������˵����ң��������ڽ������˳ơ���Ů������Ϊ�˼��й�
�������ľ���ȴ�൱���أ�����֮�⣬����(window)���и���ױ̨(tai)��
ǽ�Ϲ���һ�ڱ���(sword)�� ��Ƥ�̿ڿ������Ƿ�����
LONG
	);
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 3 */
  "tai" : "����һ�ź�����ױ̨���뿪�ĳ���б���ż����ʻ���
",
  "sword" : "�����ϴ�ǰ������ʱ���ص���Ȫ����
",
  "window" : "�����������Ͽ�ˡ�������ȥ�������������Ŀѣ��
",
]));
	set("objects", ([ /* sizeof() == 2 */
		__DIR__"npc/ning":1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"changlang",
]));

	setup();
	replace_program(ROOM);
}

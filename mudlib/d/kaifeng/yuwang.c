// Room: /d/kaifeng/yuwang.c

inherit ROOM;

void create()
{
	set("short", "����̨");
	set("long", @LONG
����̨������Сɽ��֮�ϣ�����羰�������������ţ��Թ�������
�������δ��Ǹߵ�ʤ�ء��ഫ����ʱ�ڣ�����ä����ʦ�����ڴ˴���
���֣���������̨����
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/woman.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"shulin",
  "eastup" : __DIR__"yuwangmiao",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}

// Room: /d/zhongzhou/bangban.c

inherit ROOM;

void create()
{
	set("short", "�칫��");
	set("long", @LONG
���ǰ��İ칫�ң��°������ͷ���Ű��ڡ���վվ����������ǰ
ȥ�������ڴ������������룺��������Ǯ�ƣ��������֡�����Ӧ�ÿ���
���Ұ���°ɡ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chenbangban.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"xunbu",
]));

	setup();
	replace_program(ROOM);
}

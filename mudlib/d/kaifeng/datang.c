// Room: /d/kaifeng/datang.c

inherit ROOM;

void create()
{
	set("short", "���⸮����");
	set("long", @LONG
���ŵ�����վ�����ߣ����Ա�����ͷ����ͷ����ͷ����ա����������
�������˺�ëֱ����̨����߹ҡ��������������Ҷ���˴��ã�����Ҳ
�����������ȥ���ǽֵ���
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
//	__DIR__"npc/bao.c" : 1,
]));
set("no_steal",1);
set("no_fight",1);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"kaifeng",
]));

	setup();
	replace_program(ROOM);
}

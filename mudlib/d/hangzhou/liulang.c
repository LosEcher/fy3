// Room: /d/hangzhou/liulang.c

inherit ROOM;

void create()
{
	set("short", "������ݺ");
	set("long", @LONG
��ǰ������������,���������ɽ,̨ͤ¥��,��ӳ����,������֦
����,��̬����,����������,Ϊ[����],֦Ҷ��ï��,��[ʨͷ],Զ��
����Ů�ɴ���ơ��ɴ����.����ݺ���裬����������
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/huangyin.c" : 2,
]));
	set("outdoors", "/d/hangzhou");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"bibo",
  "west" : __DIR__"dadao3.c",
  "southeast" : __DIR__"louwai.c",
]));

	setup();
	replace_program(ROOM);
}

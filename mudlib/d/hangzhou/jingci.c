// Room: /d/hangzhou/jingci.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
������Ժ�����Զ,�����������׹.�ڷ���кܸ�����.�¿���ɽ,��
������.��ǰ��һ�ڴ��Ӹ�������עĿ.��ʫ�޵�[���軨��ĺ����,������
��һ����������ž�ɮ�붨���ô�ƫ���ͺ��顣����] 
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/daoji.c" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"nanping",
]));
	set("outdoors", "/d/hangzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}

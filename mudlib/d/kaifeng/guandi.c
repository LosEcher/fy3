// Room: /d/kaifeng/guandi.c

inherit ROOM;

void create()
{
	set("short", "�ص���");
	set("long", @LONG
�ص���ǰһ���ϴ������¯����Ϊ����үһ���������š�����������
����Э����Ҫ��һ�¹ص�ү�����ϣ����������е�ʤ���ˣ�Ҳ��Ҫ����
�������㡣�Ͼ��ص��ֱ���Ϊ��ʥ��
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/obj/guanyu.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"paifang",
]));

	setup();
	replace_program(ROOM);
}

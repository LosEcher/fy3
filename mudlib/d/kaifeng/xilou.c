// Room: /d/kaifeng/xilou.c

inherit ROOM;

void create()
{
	set("short", "Ϸ¥");
	set("long", @LONG
һ��ľͷ�ִִ���ĸ�̨��̨�ĺ���ô�����������������Ǻ�ͷ��
��Ϸ��װ����̨�ĵط��������ǹص����ݵ��޷�����԰�����壬������
ǧ�����ն�����ȹ��¡�
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/qingyi.c" : 1,
  __DIR__"npc/xiaosheng.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"paifang",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}

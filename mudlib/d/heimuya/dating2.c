// Room: /d/heimuya/dating2.c

inherit ROOM;

void create()
{
	set("short", "�׻���");
	set("long", @LONG
�˴��������½���Ͻ�׻��ã��ɵ����Ϲ��ƹ�����˵ʥ����ɽ��
������Ҳ��ס�ڴ�.�����ȥ�������ȣ������п���Ľ�ɫ����(bian),
�������ּ�����С����
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/baihudizi.c" : 2,
]));
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
  "bian" : "����д�����������գ��׻����죻
          ǧ�����أ�һͳ���� ��
",
]));
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"linjxd6",
  "west" : __DIR__"baistep1",
]));

	setup();
	replace_program(ROOM);
}

// Room: /d/quanzhou/datang.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
������Ȫ�ݸ�����,һ��ɽ������ͼ�Ϸ�,�߹���һ���Ҷ�,�������� 
�����'��������',֪������ֻ�����Ӳ�����,�Ǹ�̰������ļһ�.�����Ա�
�п黢ͷ����(sigh), 
LONG
	);
	set("no_clean_up", 0);
//        set("no_fight", 1);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"yamen",
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "sigh" : "���·��,ÿλ����,�������,ˡ������.
",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhifu.c" : 1,
]));

	setup();
	replace_program(ROOM);
}

// Room: /d/emei/jinding.c

inherit ROOM;

void create()
{
	set("short", "��");
	set("long", @LONG
���ڵ����˽�,������һ��.��˵,����Ԫ谵Ķ�����ģ,�ͽ���
ǧ������̨��������,Ҫ���ڶ�ü��ߴ���'���ɽ���',�Դ�,�ô�
�Խ�����,����������'����','�ƺ�','���','ʥ��'.
LONG
	);
	set("no_clean_up", 0);
	set("valid_startroom", 1);
	set("exits", ([ /* sizeof() == 1 */
  "southdown" : __DIR__"hongchun",
]));
	set("outdoors", "/d/emei");
	set("objects", ([ /* sizeof() == 1 */
__DIR__"npc/miejue.c" : 1,
__DIR__"npc/huifan.c" : 1,
]));

	setup();
"/obj/board/emei_board"->foo();
	replace_program(ROOM);
}

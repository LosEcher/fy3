// Room: /d/suzhou/meizhuang/chufang.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����÷ׯ�ĳ���������Ϊ��λׯ��׼������֮�⣬��Ȼ�󲿷�ʱ��
����æ��Ϊ��ׯ����׼����ʳ����Ȼ÷ׯ�涨�˿���ʱ�䣬�����ٵ��ӻ�
�ǳ��ų�ʦ������֮����͵͵��Щ�����Ա�����֮ԥ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"shibanlu1",
]));
	set("objects",([
	__DIR__"obj/chujia":1,
	__DIR__"npc/chushifu":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}

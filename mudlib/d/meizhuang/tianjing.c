// Room: /d/suzhou/meizhuang/tianjing.c

inherit ROOM;

void create()
{
	set("short", "�쾮");
	set("long", @LONG
���Ǹ���̫���СԺ�����Ҹ�ֲһ����÷��֦Ҷ���������ǲԾ�����
��������һ��ˮ��������͸����������Ժ��������ʯ�壬���澹��������
ӡ����֪����λ�������µġ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north" :__DIR__"keting",
  "south" : __DIR__"qingshilu2",
]));
	set("objects",([
		__DIR__"npc/tongnan":1,
		__DIR__"npc/tongnu":1,
]));
	set("no_clean_up", 0);
	set("outdoors","meizhuang");
	set("item_desc",([
	"ˮ��"  :"������������ˮ��fill��ѽ��\n",
	"shuijing" :"������������ˮ��fill��ѽ��\n",
	]));
	set("resource/water",1);
	setup();
	replace_program(ROOM);
}

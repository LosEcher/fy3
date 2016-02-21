// Room: /d/suzhou/jinfengzhuang.c

inherit ROOM;

void create()
{
	set("short", "���ׯ");
	set("long", @LONG
ׯ�����ܹ������ƣ�̨ͤ¥���Լ�ɼ�����˵��ׯׯ�����ǽ������Ŷ�ʧɫ
���Ա�֮����ʩ��������Ľ�ݡ��ļҳ�����Ϊ�ҳ�������ׯ���书ȴ�ѵǷ���
����ͻȻ������ǰһ�����ƺ�������������ǰ��
LONG
	);
	set("outdoors","suzhou");
	set("valid_startroom",1);
	set("objects",([
		__DIR__"npc/bao":1,
]));
	set("exits",([
	"up" :__DIR__"xiaoqige",
	"north" :__DIR__"chengdongjie2",
	"south" :__DIR__"lianwuchang",
]));
	set("no_clean_up", 0);

	setup();
	call_other("/obj/board/murongboard","???");
	replace_program(ROOM);
}

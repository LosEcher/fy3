// Room: /d/suzhou/meizhuang/shibanlu1.c

inherit ROOM;

void create()
{
	object ob;
	set("short", "ʯ��·");
	set("long", @LONG
һ��������ʯ��·����·������÷����͸��÷����ϡ�����͵��ϵ�
Զɽ��΢��ϰϰɷ�����ˣ�������ط��˲�����˼�����淿��Ʈ��������
����������÷ׯ�鷿��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north":__DIR__"shufang",
	"east":__DIR__"shibanlu2",
	"south":__DIR__"chufang",
  "west" : __DIR__"yuemen",
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	ob=new(__DIR__"npc/nandizi"+(random(4)+1));
	ob->set("id","huzhuang dizi");
	ob->set("combat_exp",10000);
	ob->move(this_object());
}
int valid_leave(object me,string dir)
{
	object npc;
	npc=present("nan dizi",this_object());
	if(!npc)	return ::valid_leave(me,dir);
	if(dir=="north"&&me->query("family/family_name")!="��ɽ÷ׯ")
	return notify_fail("��ׯ����Ц��������Ҵ���ׯ��\n");
	return ::valid_leave(me,dir);
}

// Room: /d/emei/jushich.c

inherit ROOM;

void create()
{
	set("short", "һɽ����");
	set("long", @LONG
���Ŷ���ʯ������,·�߲�Զ�Ĺ��ٴ�����,��һ���ʯ�縫����,
��������ɽ�µ������,ʯ��̦޺�ܲ�,����ع�����'��һɽ'����.��
�ʳ�ɫ,��������仯,ʱ��ʱ��.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xu.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/emei");
	set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"uproad",
  "northup" : __DIR__"hongchun",
]));

	setup();
}

int valid_leave(object me,string dir)
{
        string fam;
        object npc;

        fam=(string)me->query("family/family_name");
	npc=present("jingxu shitai",environment(me));
        if( fam && fam!="������" && objectp(npc) &&
                dir=="northup")
	return notify_fail("����ʦ̫������ӣ���ֻ�����Ŀڷ��ƶ������á�\n");
        return ::valid_leave(me,dir);
}

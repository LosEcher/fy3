inherit ROOM;

void create()
{
	set("short","�һ����Ʒ�");
        set("long", @LONG
����������ɽ��´��һƬ�����أ�����ɽ�»�������ľ���죬����
·�е���һ������Ʒ��������Ʒ�����һƬ��ש���ߣ���������
���죬·������վ�����Ž��ڣ�����ɽ���к����������ڣ������
Ұ��ʵ���ǽ�����һ��������û�е�׳�۾����ɴ��򶫱���ת��
��·ֱͨ����죻��������Ƕ���֮�ƣ��Թ���������Χ��
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
                "northeast" : __DIR__"torjq1",
		"northwest" :__DIR__"tojmq1",
		"northup":__DIR__"lhqmen",
                "southdown" : __DIR__"shanlu4",
        ]));

        set("objects", ([
__DIR__"npc/weiyixiao":1,
        ]));
        set("no_clean_up", 0);
        setup();
}
int valid_leave(object me, string dir)
{
	string banghui;
	banghui=(string)me->query("banghui");

	if((!banghui || banghui!="����") && dir=="northup" &&
                objectp(present("wei yixiao", environment(me))))
           return notify_fail("ΤһЦ�ȵ����㲻���ҽ̵��ӣ��������ڡ�\n");

        return ::valid_leave(me, dir);
}

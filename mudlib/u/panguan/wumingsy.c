//make by temp
//ROOM: wumingsy.c

inherit ROOM;

void create()
{
        set("short", "����ɽ��");
        set("long",@LONG
���������ɽ��ɽ���ˣ�������������ȥ��Ŷ���ô��һƬ
ɭ��ѽ���ף�ɭ��������и�С������̧ͷ��ɽ����ȥ��������
ɽ����Զ�ˣ��ӰѾ��ɡ�
LONG
        );
        set("exits", ([
                "southdown" : __DIR__"miling5",
                "northup" : __DIR__"xuesongl3"
        ]));
        setup();
        replace_program(ROOM);
}

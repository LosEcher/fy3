//Mr.music yangzhou ҩ��

inherit ROOM;

void create()
{
        set("short", "ҩ��");
        set("long", @LONG
	������һ��ҩ�̣���Ϊ����̼������ܶ࣬����ҩƷ����ȫ���۸�
Ҳ�ȽϹ�������������������Զ�ϵ�����������ϣ����ȱ��ҩ�ġ�

LONG
        );

        set("exits", ([ 
                      "south" : __DIR__"dongguan2",
                     ]));
        set("objects", ([
                __DIR__"npc/qilaoban": 1
        ]) );

        setup();
}


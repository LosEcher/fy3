
//Mr.music  yangzhou's ������ɽׯ

inherit ROOM;

void create()
{
        set("short", "������ɽׯ");
        set("long", @LONG
	����������ȫ��ˮ��һ·¥ֱ̨��ɽ��
	�������������������Ƶ�������ɽׯ��ׯ�ڱ�ˮ�̲ݣ�̨ͤˮ鿣�
����¥�ţ��������š����⡰�����ޱߣ������ػ�����  ̨ͤ���ɣ�������
ˮȫ�ա�����ˮ���ҡ��������ڡ����ɵ������Ұ����������顣

LONG
        );

        set("exits", ([
                "north" : __DIR__"changdichunliu",
                "south" : __DIR__"jiedao4",
        ]));

        set("item_desc", ([
                       "������" : "��������һ�������������Ư��һҶС��\n" , 
                          ]));
        set("valid_startroom", 1);        
        set("objects", ([
//                __DIR__"npc/zhengbanqiao": 1,
        ]));

        setup();
}






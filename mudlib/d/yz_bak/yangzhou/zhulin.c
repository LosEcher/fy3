
//Mr.music  yangzhou's ������

inherit ROOM;

void create()
{
        set("short", "������");
        set("long", @LONG
	���߽���һƬ�����֣�����ï���޳����β���ӳ������һ����Ȥ��
����������ͨ��һ��С¥���Ǿ��ǰ����������鷿--��Ҷ��ի��������
��ƽ�ն��ڴ˻������ī�ѣ�żȻҲ�ڴ˻Ӻ���ī������ɽׯ���š�

LONG
        );

        set("exits", ([
                "east" : __DIR__"yanchi",
                "south" : __DIR__"xiangzhai",
        ]));

        set("item_desc", ([
                       "С¥" : "�����ǰ����������鷿--����Ҷ��ի��\n" , 
                          ]));
        
        set("objects", ([
               __DIR__"npc/obj/zhuye": 2,
        ]));

        setup();
}






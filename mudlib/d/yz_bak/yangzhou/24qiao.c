
//Mr.music  yangzhou's ��ʮ����

inherit ROOM;

void create()
{
        set("short", "��ʮ����");
        set("long", @LONG
	����ʮ��������ҹ�����˺δ��̴�����
	��ʮ����������ҩ�ţ�����������ʮ�������ڴˣ��ʵ�����
��ͷʯ�̡��̻�ҹ�¡�����֪��˭����ʡ�������һ��������Ի��
������԰�����򱱾��Ǵ����£�ԶԶ�Ϳɼ���Ժ���������ˡ�

LONG
        );

        set("exits", ([
                "north"     : __DIR__"huangye6",
                "west"    :  __DIR__"tingxiaoyuan",
                "south"   : __DIR__"siqiaoyanyu",
        ]));

        set("item_desc", ([
                       "������" : "����ɫ��һ��������ׯ�������ϡ�" , 
                          ]));
        
        set("objects", ([
//                __DIR__"npc/zhengbanqiao": 1,
        ]));

        setup();
}






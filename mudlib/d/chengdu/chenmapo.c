//by enter xiaoya

inherit ROOM;

void create()
{
        set("short", "�����Ŷ�����");
        set("long", @LONG
��������������µĳ����Ŷ�����.����������İڷ���
ʮ���ź��᷽��,һ����˾�������Ʒ�������Ŷ���.������
��æ������ͷת��.��̨�ϰ�����̳"�����"��һ������,��
������ŵľ��ǳ����š��������и�������
LONG
        );

        set("exits", ([
                "west" : __DIR__"beijie1",                
                "east" : __DIR__"chufang",
        ]));
        set("objects", ([
                "/d/chengdu/npc/mapo" : 1,
        ]));
      
        setup();
        replace_program(ROOM);
}

 

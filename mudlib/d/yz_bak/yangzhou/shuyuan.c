
//Mr.music  yangzhou's ÷����Ժ

inherit ROOM;

void create()
{
        set("short", "÷����Ժ");
        set("long", @LONG
	����������ﺣ�ڵ�ѧ�� -- ÷����Ժ��Ժ��������룬��ʵ���š�
Ժ�ڳ���һ�ò������۵Ļ�ľ��ȴ�ǡ�ά��һ֧��  �ĺ���ͬ�ࡱ��[1;37m��[2;370;m ��
Ժ�ڻ��������������ʣ�ʹ����ʱ��ȴ����̬������������������ͻȻ����
�ƺ�ȱ����Щʲô������һ����飬ʧ����ġ�

LONG
        );


        set("no_fight","1");
        set("no_magic",1);
        set("valid_startroom", 1);
        set("exits", ([
                "east" : __DIR__"yz-x2",
        ]));

        set("item_desc", ([
                       "��" : "һ�ֺ�ϡ�еĻ�ľ�����С�ά��һ֦����������\n" , 
                          ]));
        
        set("objects", ([
                __DIR__"npc/tangbohu": 1,
                __DIR__"npc/qiuxiang": 1,
        ]));

        setup();
}

int valid_leave(object me, string dir)
{
        me->set_temp("mark/��", 0);
        return 1;
}


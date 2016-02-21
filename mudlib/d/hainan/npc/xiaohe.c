#include <ansi.h>;
inherit NPC;

void create()
{
        set_name(HIW"�ɺ�"NOR, ({ "xian he", "he" }) );
        set("race", "Ұ��");
        set("age", 100);
        set("long", "һֻ���������ɺף������������(qi)��ȥ.\n");
        set("attitude", "peaceful");
        set("spi",100);
        set("int",100);
        set("per",100);
        set("con",100);
        set("limbs", ({ "ͷ��", "����", "���" }) );
        set("verbs", ({ "bite" }) );

        set("combat_exp", 50000000);

        set_temp("apply/attack", 100);
        set_temp("apply/damage", 10);
        set_temp("apply/armor", 0);
        set_temp("apply/defence",90);

        setup();
}
void die()
{
        object ob,me;
me = this_player();
        message_vision("$N˻�ƵĽ��˼��������ڵ������ˡ�����\n һ���׹�������һ����������ëƮ����$N�����ϡ���\n\n", this_object(),me);
        ob = new("/d/hainan/obj/yumao");
        ob->move(me);
        destruct(this_object());
}
void init()
{
        add_action("do_xia","xia");
        add_action("do_qi","qi");
        add_action("do_qu","qu");
}
int do_qi(string arg)
{
        object me;
        int extra;
        me = this_player();
        if (arg = "�ɺ�" && arg = "xian he" && arg = "he")
        {
                extra = me->query_skill("jiaheshu",1);
                if (extra < 100) return notify_fail("��ļݺ���������������\n");
                if (me->query_temp("mark/qi1")) return notify_fail("�㻹Ҫ�ﵽ�ɺ��Դ���ȥ��\n");
                message_vision(HIW"ֻ��$N����Ծ�����ɺ׵ĺ󱳣��ɺ�����$N��������ա�����\n\n\n"NOR,me);
                set("long","һֻ���������ɺף��и���������������.\n");
                me->set_temp("mark/qi1",1);
                me->set_temp("mark/tiankong",1);
                me->move("/d/hainan/kongzhong");
                this_object()->move("/d/hainan/kongzhong");
                return 1;
        }
}

int do_xia(string arg)
{
        object me;
        me = this_player();
        if (arg != "�ɺ�" && arg != "xian he" && arg != "he") 
                return notify_fail("��Ҫ����ȥ��\n");
        if (!me->query_temp("mark/qi1")) return notify_fail("��Ҫ���ģ�������\n");
        if (me->query_temp("mark/tiankong"))
        {
                message_vision(HIR"$N�������ɺף������Ŵӿ��е�����ȥ��.....\n\n\n"NOR,me);
                me->die();
                message("channel:rumor",YEL"��ҥ�ԡ�ĳ�ˣ��������ѣ�����һ�ˣ�\n"NOR,users());
                destruct(this_object());
        }
        else
        {
                message_vision("ֻ��$N����һԾ���������ɺס�\n",me);
                set("long","һֻ���������ɺף������������(qi)��ȥ.\n");
                me->delete_temp("mark/qi1",);
        }
        return 1;
}
int do_qu(string arg)
{
        object me;
        string gg;
        me = this_player();
        if((int)me->query("atman") <50)
        {
                return notify_fail("��ĵ��в��������޷������ɺס�\n");
                message_vision(HIW"ֻ��$N���ɺ���ҡҡ���䣬��Ҫ�������ˡ�����\n\n\n\n�ɺ���������������������������\n"NOR,me);
        }
        if(! arg )
                return notify_fail("��׼�������ɺ׵����\n\n�����ȥ�ĵط��У�\n����(zhongzhou)    ����(yangzhou)    �ɶ�(chengdu)    ����ɽ(baituo)    ����(dali)\n����(jingcheng)    ��ɽ(huashan)     ����(kunlun)     ȫ���(quanzhen)  ��ɽ(songshan)\n̩ɽ(taishan)      �㵴(yandang)     �ྩ(yanjing)    ����(emei)        ����(hangzhou)\n��ɽ(hengshan)     ������(jingdezhen)����(kaifeng)    ���չ�(lingjiu)   Ȫ��(quanzhou)\n����(suzhou)       ̨��(taiwan)      �䵱(wudang)\n");
        if(arg=="yangzhou")     
                gg=("/d/yangzhou/shizhongxin");
        else if(arg=="zhongzhou") 
                gg=("/d/zhongzhou/shizhongxin");
        else if(arg=="chengdu") 
                gg=("/d/chengdu/eastchengmen");
        else if(arg=="baituoshan") 
                gg=("/d/baituo/damen");
        else if(arg=="dali") 
                gg=("/d/dali/dalinorth");
        else if(arg=="jingcheng") 
                gg=("/d/huanggon/yongdingmen");
        else if(arg=="huashan") 
                gg=("/d/huashan/path1");
        else if(arg=="kunlun") 
                gg=("/d/mingjiao/shanjiao");
        else if(arg=="quanzhen") 
                gg=("/d/quanzhen/damen");
        else if(arg=="songshan") 
                gg=("/d/songshan/taishique");
        else if(arg=="taishan") 
                gg=("/d/taishan/taishanjiao");
        else if(arg=="yandang") 
                gg=("/d/yandang/jiedao");
        else if(arg=="yanjing") 
                gg=("/d/yanjing/gate");
        else if(arg=="emei") 
                gg=("/d/emei/road");
        else if(arg=="hangzhou") 
                gg=("/d/hangzhou/ximen");
        else if(arg=="hengshan") 
                gg=("/d/hengshan/jinlongxia");
        else if(arg=="jingdezhen") 
                gg=("/d/jindezheng/center");
        else if(arg=="kaifeng") 
                gg=("/d/kaifeng/zhuque");
        else if(arg=="lingjiu") 
                gg=("/d/lingjiu/shanjiao");
        else if(arg=="quanzhou") 
                gg=("/d/quanzhou/nstreet3");
        else if(arg=="suzhou") 
                gg=("/d/suzhou/chengzhong");
        else if(arg=="taiwan") 
                gg=("/d/taiwan/matou");
        else if(arg=="wudang") 
                gg=("/d/wudang/guangchang");
        else    {
                return notify_fail("���޷������ɺ׵�����!\n");
        }
        message_vision("ֻ�����д���һ����˻,һֻ�׺���������.\n",me);
        me->move(gg);
        me->delete_temp("mark/tiankong");
        me->delete_temp("mark/qi1");
        message_vision("ֻ��$N��������һ������ϵ�����������\n",me);
        this_object()->move(gg);
        message_vision(HIW"$N���ݵ��ɺ׽��˼����󣬷����ˡ�������\n\n\n"NOR,me);
        destruct(this_object());
        return 1;
}

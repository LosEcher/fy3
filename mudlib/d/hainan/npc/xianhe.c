#include <ansi.h>;
inherit NPC;

void create()
{
        set_name(HIW"仙鹤"NOR, ({ "xian he", "he" }) );
        set("race", "野兽");
        set("age", 100);
        set("long", "一只年过百岁的仙鹤，你可以试着骑(qi)上去.\n");
        set("attitude", "peaceful");
        set("spi",100);
        set("int",100);
        set("per",100);
        set("con",100);
        set("limbs", ({ "头部", "身体", "翅膀" }) );
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
        message_vision("$N嘶哑的叫了几声，倒在地上死了。。。\n 一道白光闪过，一撮美丽的羽毛飘落在$N的身上。。\n\n", this_object(),me);
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
        if (arg = "仙鹤" && arg = "xian he" && arg = "he")
        {
                extra = me->query_skill("jiaheshu",1);
                if (extra < 100) return notify_fail("你的驾鹤术还不够熟练。\n");
                if (me->query_temp("mark/qi1")) return notify_fail("你还要骑到仙鹤脑袋上去？\n");
                message_vision(HIW"只见$N轻轻跃上了仙鹤的后背，仙鹤载着$N飞上了天空。。。\n\n\n"NOR,me);
                set("long","一只年过百岁的仙鹤，有个人正坐在它背上.\n");
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
        if (arg != "仙鹤" && arg != "xian he" && arg != "he") 
                return notify_fail("你要下哪去？\n");
        if (!me->query_temp("mark/qi1")) return notify_fail("你要下哪？地狱？\n");
        if (me->query_temp("mark/tiankong"))
        {
                message_vision(HIR"$N跳下了仙鹤，翻滚着从空中掉了下去。.....\n\n\n"NOR,me);
                me->die();
                message("channel:rumor",YEL"【谣言】某人：发生空难，死亡一人！\n"NOR,users());
                destruct(this_object());
        }
        else
        {
                message_vision("只见$N轻轻一跃，跳下了仙鹤。\n",me);
                set("long","一只年过百岁的仙鹤，你可以试着骑(qi)上去.\n");
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
                return notify_fail("你的道行不够，还无法屈驾仙鹤。\n");
                message_vision(HIW"只见$N在仙鹤上摇摇欲落，快要掉下来了。。。\n\n\n\n仙鹤驼着你慢慢的落了下来。。。\n"NOR,me);
        }
        if(! arg )
                return notify_fail("你准备屈驾仙鹤到哪里？\n\n你可以去的地方有：\n中州(zhongzhou)    扬州(yangzhou)    成都(chengdu)    白驼山(baituo)    大理(dali)\n京城(jingcheng)    华山(huashan)     昆仑(kunlun)     全真教(quanzhen)  嵩山(songshan)\n泰山(taishan)      雁荡(yandang)     燕京(yanjing)    峨嵋(emei)        杭州(hangzhou)\n恒山(hengshan)     景德镇(jingdezhen)开封(kaifeng)    灵鹫宫(lingjiu)   泉州(quanzhou)\n苏州(suzhou)       台湾(taiwan)      武当(wudang)\n");
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
                return notify_fail("你无法驱驾仙鹤到那里!\n");
        }
        message_vision("只见空中传来一声长嘶,一只白鹤盘旋而下.\n",me);
        me->move(gg);
        me->delete_temp("mark/tiankong");
        me->delete_temp("mark/qi1");
        message_vision("只见$N好似神仙一般从天上掉了下来！！\n",me);
        this_object()->move(gg);
        message_vision(HIW"$N驱驾的仙鹤叫了几声后，飞走了。。。。\n\n\n"NOR,me);
        destruct(this_object());
        return 1;
}
